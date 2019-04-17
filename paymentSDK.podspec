Pod::Spec.new do |s|
  s.name             = 'paymentSDK'
  s.version          = '3.2.1'
  s.summary          = 'Wirecard paymentSDK - online payments'
  s.description      = <<-DESC
                       The library allows online payments processing.
                       Supported payment methods:
                       - Apple Pay
                       - Card payments (Mastercard, Visa, American Express)
                       - PayPal
                       - SEPA Direct Debit
                       Fully integrated with licensed Wirecard Payment infrastructure.
                       DESC
  s.homepage         = 'https://github.com/wirecard/paymentSDK-iOS'
  s.documentation_url= 'https://paymentsdk.github.io'
  s.license          = { :type => 'MIT' }
  s.authors          = { 'Stefan Sedlak' => 'stefan.sedlak@wirecard.com', 'Jozef Vrana' => 'jozef.vrana@wirecard.com' }
  s.source           = { :git => 'https://github.com/wirecard/paymentSDK-iOS.git', :tag => s.version }
  s.platform         = :ios
  s.ios.deployment_target = '9.0'

   s.subspec 'All' do |ss|
      ss.dependency            'paymentSDK/Core'
      ss.dependency            'paymentSDK/CoreCard'
      ss.dependency            'paymentSDK/Alipay'
      ss.dependency            'paymentSDK/ApplePay'
      ss.dependency            'paymentSDK/Card'
      ss.dependency            'paymentSDK/CardScanner'
      ss.dependency            'paymentSDK/CardScannerGallery'
      ss.dependency            'paymentSDK/PayPal'
      ss.dependency            'paymentSDK/SEPA'
      ss.dependency            'paymentSDK/IBANScanner'
      ss.dependency            'paymentSDK/IBANScannerGallery'
      ss.dependency            'paymentSDK/ZAPP'
    end

    s.subspec 'Core' do |ss|
      ss.vendored_frameworks = 'WDeCom.framework'
      ss.resource            = 'WDeCom.framework/WDeCom.bundle'

      ss.dependency            'AFNetworking', '~> 3.1.0'
      ss.dependency            'CMPopTipView', '~> 2.3.2'
      ss.dependency            'CocoaLumberjack', '~> 3.4.2'
      ss.ios.dependency        'Lockbox', '~> 3.0.6'
      ss.dependency            'Mantle', '~> 2.1.0'
      ss.ios.dependency        'MBProgressHUD', '~> 1.1.0'
      ss.dependency            'libextobjc/EXTScope', '~> 0.6'
      ss.ios.dependency        'TPKeyboardAvoiding', '~> 1.3.2'

      ss.ios.frameworks      = 'Foundation', 'UIKit', 'Security'
      ss.libraries           = 'xml2'
    end

    s.subspec 'Alipay' do |ss|
      ss.vendored_frameworks = 'WDeComAlipay.framework'

      ss.dependency            'paymentSDK/Core'
    end

    s.subspec 'ApplePay' do |ss|
      ss.vendored_frameworks = 'WDeComApplePay.framework'

      ss.dependency            'paymentSDK/CoreCard'

      ss.ios.frameworks       = 'AddressBook', 'PassKit'
    end

    s.subspec 'CoreCard' do |ss|
      ss.vendored_frameworks = 'WDeComCoreCard.framework'
    
      ss.dependency            'paymentSDK/Core'
    end
    
    s.subspec 'Card' do |ss|
      ss.vendored_frameworks = 'WDeComCard.framework'
      ss.resource            = 'WDeComCard.framework/WDeComCard.bundle'

      ss.dependency            'paymentSDK/CoreCard'

    end
    s.subspec 'CardScanner' do |ss|
      ss.vendored_frameworks = 'WDeComCardScanner.framework'
      ss.resource            = 'WDeComCardScanner.framework/WDeComCardScanner.bundle'
      
      ss.dependency            'paymentSDK/Card'      
      ss.dependency            'GoogleMobileVision/TextDetector', '~> 1.5.0'
    end

    s.subspec 'CardScannerGallery' do |ss|
      ss.vendored_frameworks = 'WDeComCardScannerGallery.framework'
      ss.resource            = 'WDeComCardScannerGallery.framework/WDeComCardScannerGallery.bundle'

      ss.dependency            'paymentSDK/CardScanner'
    end

    s.subspec 'PayPal' do |ss|
      ss.vendored_frameworks = 'WDeComPayPal.framework'

      ss.dependency            'paymentSDK/Core'
    end 

    s.subspec 'SEPA' do |ss|
      ss.vendored_frameworks = 'WDeComSEPA.framework'
      ss.resource            = 'WDeComSEPA.framework/WDeComSEPA.bundle'

      ss.dependency            'paymentSDK/Core'
      ss.dependency            'IBAN', '~> 1.0.0'

    end

    s.subspec 'IBANScanner' do |ss|
      ss.vendored_frameworks = 'WDeComIBANScanner.framework'
      ss.resource            = 'WDeComIBANScanner.framework/WDeComIBANScanner.bundle'
      
      ss.dependency            'paymentSDK/SEPA'      
      ss.dependency            'GoogleMobileVision/TextDetector', '~> 1.5.0'
    end

    s.subspec 'IBANScannerGallery' do |ss|
      ss.vendored_frameworks = 'WDeComIBANScannerGallery.framework'
      ss.resource            = 'WDeComIBANScannerGallery.framework/WDeComIBANScannerGallery.bundle'

      ss.dependency            'paymentSDK/IBANScanner'
    end

    s.subspec 'ZAPP' do |ss|
      ss.vendored_frameworks = 'WDeComZAPP.framework'

      ss.dependency            'paymentSDK/Core'
      ss.dependency            'ZappMerchantLib', '~> 1.1.2'
    end
end
