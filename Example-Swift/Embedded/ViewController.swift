//
//  ViewController.swift
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2019 Vrana, Jozef. All rights reserved.
//

import WDeComCard
import WDeComCardScannerGallery

let PMTitleCard                     = "Card"
let PMTitleAnimatedCardfield        = "Animated cardfield"
let PMTitleCardManualBrandSelection = "Card manual brand selection"
let PMTitleCardManualBrandSelectionAnimated = "Animated card manual brand selection"

class ViewController: PaymemtVC, UIActionSheetDelegate {
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    @IBAction func onPay(_ sender: UIButton) {
        let actionSheetController = UIAlertController(title: "Payment", message: nil, preferredStyle: .actionSheet)
        
        func handler(actionTarget: UIAlertAction){
            
            
            if actionTarget.style == .cancel {
                self.dismiss(animated: true, completion: nil)
                return
            }
            
            let paymentTitle = actionTarget.title
            if paymentTitle == PMTitleCard || paymentTitle == PMTitleCardManualBrandSelection {
                let storyboard = UIStoryboard(name: "Main", bundle: nil)
                let vc = storyboard.instantiateViewController(withIdentifier: "CardfieldVC")
                self.navigationController?.pushViewController(vc, animated: true)
                let manualCardbrandSelection = paymentTitle == PMTitleCardManualBrandSelection ? true : false
                let cardLayout = WDECCardLayout.appearance()
                cardLayout.manualCardBrandSelectionRequired = manualCardbrandSelection
            }
            if paymentTitle == PMTitleAnimatedCardfield || paymentTitle == PMTitleCardManualBrandSelectionAnimated {
                let storyboard = UIStoryboard(name: "Main", bundle: nil)
                let vc = storyboard.instantiateViewController(withIdentifier: "AnimatedCardfieldVC")
                self.navigationController?.pushViewController(vc, animated: true)
                let manualCardbrandSelection = paymentTitle == PMTitleCardManualBrandSelectionAnimated ? true : false
                let cardLayout = WDECCardLayout.appearance()
                cardLayout.manualCardBrandSelectionRequired = manualCardbrandSelection
            }
        }
        
        actionSheetController.addAction(UIAlertAction(title: PMTitleCard, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMTitleAnimatedCardfield, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMTitleCardManualBrandSelection, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMTitleCardManualBrandSelectionAnimated, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: handler))
        
        self.present(actionSheetController, animated: true, completion: nil)
    }
}
