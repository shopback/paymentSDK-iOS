//
//  ViewController.swift
//  Embedded
//
//  Created by Vrana, Jozef on 3/6/17.
//  Copyright © 2017 Vrana, Jozef. All rights reserved.
//

import UIKit
import PaymentSDK

let AMOUNT = NSDecimalNumber.init(mantissa: 199, exponent: -2, isNegative: false)

class ViewController: PaymemtVC, UIActionSheetDelegate, WDCardFieldDelegate {
    
    @IBOutlet weak var cardField: WDCardField!
    @IBOutlet weak var cardFieldStateLabel: UILabel!
    @IBOutlet weak var payBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.cardField.becomeFirstResponder()
    }
    
    @IBAction func onClearAction(_ sender: UIButton) {
        self.cardField.clear()
    }
    
    @IBAction func onPayAction(_ sender: UIButton) {
        // if you create payment object just before calling makePayment you are sure that timestamp is correct
        var payment = self.createCardPayment()
        self.cardField.cardPayment = payment // append card data
        
        payment = self.cardField.cardPayment
        self.client?.make(payment, withCompletion:{(response: WDPaymentResponse?,error: Error?) in
            let alertTitle = error != nil ? "Error" : "Success"
            let alertMessage = error != nil ? error!.localizedDescription : "Item(s) has been purchased."
            let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
            
            ac.addAction(UIAlertAction(title:"OK", style:.default, handler:nil));
            self.present(ac, animated:true, completion:nil)
            
            // each request shall have unique ID, once it is used create new one
            self.cardField.cardPayment = self.createCardPayment()
        })
    }
    
    func cardField(_ cardField: WDCardField, didChange state: WDCardFieldState) {
        self.payBtn.isEnabled = cardField.isValid
        
        var text : String?
        
        switch state {
        case WDCardFieldState.cardInitial: text = "card initial"
        case WDCardFieldState.jailbrokenDevice: text = "jailbroken device"
        case WDCardFieldState.cardValid: text = "card valid"
        case WDCardFieldState.cardUnsupported: text = "card unsupported"
        case WDCardFieldState.numberEditting: text = "number editting"
        case WDCardFieldState.numberIncomplete: text = "number incomplete"
        case WDCardFieldState.numberInvalid: text = "number invalid"
        case WDCardFieldState.numberValid: text = "number valid"
        case WDCardFieldState.monthEditting: text = "month editting"
        case WDCardFieldState.yearEditting: text = "year editting"
        case WDCardFieldState.expirationDateIncomplete: text = "expiration date incomplete"
        case WDCardFieldState.expirationDateInvalid: text = "expiration date invalid"
        case WDCardFieldState.expirationDateValid: text = "expiration date valid"
        case WDCardFieldState.securityCodeEditting: text = "security code editting"
        case WDCardFieldState.securityCodeIncomplete: text = "security code incomplete"
        case WDCardFieldState.securityCodeInvalid: text = "security code invalid"
        case WDCardFieldState.securityCodeValid: text = "security code valid"
        }
        
        self.cardFieldStateLabel.text = text
    }
    
    func createCardPayment() -> WDCardPayment {
        let payment = WDCardPayment.init(amount: AMOUNT, amountCurrency: WDCurrency.USD, transactionType: WDTransactionType.purchase)
        let WD_MERCHANT_ACCOUNT_ID = "33f6d473-3036-4ca5-acb5-8c64dac862d1"
        let WD_MERCHANT_SECRET_KEY = "9e0130f6-2e1e-4185-b0d5-dc69079c75cc"
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: WD_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: WD_MERCHANT_SECRET_KEY)
        let accountHolder = WDCustomerData()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        payment?.accountHolder = accountHolder
        
        return payment!
    }
}

