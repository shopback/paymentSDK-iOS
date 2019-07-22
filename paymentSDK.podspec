Pod::Spec.new do |s|
    s.name             = 'paymentSDK'
    s.version          = '3.5.1'
    s.summary          = 'Wirecard paymentSDK - online payments'

    s.description      = <<-DESC
The library allows online payments processing.
Supported payment methods:
- ApplePay payments
- Card payments (Mastercard, Visa, American Express)
- PayPal payments
- SEPA processing
Fully integrated with licensed Wirecard Payment infrastructure.
DESC

    s.homepage         = 'https://github.com/wirecard/paymentSDK-iOS'
    s.documentation_url= 'https://wirecard.github.io/paymentSDK-iOS/integration/latest'
    s.license          = { :type => 'MIT' }
    s.authors          = { 'Stefan Sedlak' => 'stefan.sedlak@wirecard.com', 'Jozef Vrana' => 'jozef.vrana@wirecard.com' }
    s.source           = { :git => 'https://github.com/wirecard/paymentSDK-iOS.git', :tag => s.version }
    s.platform         = :ios
    s.ios.deployment_target = '9.0'

    s.requires_arc     = true

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
        ss.dependency            'paymentSDK/Scanner'
        ss.dependency            'paymentSDK/PhotoGallery'
    end

    s.subspec 'Core' do |ss|
        ss.vendored_frameworks = 'eCom/WDeCom.framework'
        ss.resource            = 'eCom/WDeCom.framework/WDeCom.bundle'

        ss.dependency            'AFNetworking', '~> 3.2.1'
        ss.dependency            'CMPopTipView', '~> 2.3.2'
        ss.dependency            'CocoaLumberjack', '~> 3.5.3'
        ss.ios.dependency        'Lockbox', '~> 3.0.6'
        ss.dependency            'Mantle', '~> 2.1.0'
        ss.ios.dependency        'MBProgressHUD', '~> 1.1.0'
        ss.dependency            'libextobjc/EXTScope', '~> 0.6.0'
        ss.ios.dependency        'TPKeyboardAvoiding', '~> 1.3.2'

        ss.ios.frameworks      = 'Foundation', 'UIKit', 'Security'
        ss.libraries           = 'xml2'
    end

    s.subspec 'Alipay' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComAlipay.framework'

        ss.dependency            'paymentSDK/Core'
    end

    s.subspec 'ApplePay' do |ss|
        ss.vendored_frameworks  = 'eCom/WDeComApplePay.framework'

        ss.dependency             'paymentSDK/CoreCard'

        ss.ios.frameworks       = 'AddressBook', 'PassKit'
    end

    s.subspec 'CoreCard' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComCoreCard.framework'

        ss.dependency            'paymentSDK/Core'
    end

    s.subspec 'Card' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComCard.framework'
        ss.resource            = 'eCom/WDeComCard.framework/WDeComCard.bundle'

        ss.dependency            'paymentSDK/CoreCard'
    end

    s.subspec 'PhotoGallery' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComPhotoGallery.framework'

        ss.dependency            'paymentSDK/Core'
    end

    s.subspec 'Scanner' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComScanner.framework'
        ss.resource            = 'eCom/WDeComScanner.framework/WDeComScanner.bundle'

        ss.dependency            'paymentSDK/Card'
        ss.dependency            'GoogleMobileVision/TextDetector', '~> 1.6.0'
    end

    s.subspec 'CardScanner' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComCardScanner.framework'
        ss.resource            = 'eCom/WDeComCardScanner.framework/WDeComCardScanner.bundle'

        ss.dependency            'paymentSDK/Scanner'
    end

    s.subspec 'CardScannerGallery' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComCardScannerGallery.framework'
        ss.resource            = 'eCom/WDeComCardScannerGallery.framework/WDeComCardScannerGallery.bundle'

        ss.dependency            'paymentSDK/CardScanner'
        ss.dependency            'paymentSDK/PhotoGallery'
    end

    s.subspec 'PayPal' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComPayPal.framework'

        ss.dependency            'paymentSDK/Core'
    end

    s.subspec 'SEPA' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComSEPA.framework'
        ss.resource            = 'eCom/WDeComSEPA.framework/WDeComSEPA.bundle'

        ss.dependency            'paymentSDK/Core'
        ss.dependency            'IBAN', '~> 1.0.0'
    end

    s.subspec 'IBANScanner' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComIBANScanner.framework'
        ss.resource            = 'eCom/WDeComIBANScanner.framework/WDeComIBANScanner.bundle'

        ss.dependency            'paymentSDK/SEPA'
        ss.dependency            'paymentSDK/Scanner'
    end

    s.subspec 'IBANScannerGallery' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComIBANScannerGallery.framework'
        ss.resource            = 'eCom/WDeComIBANScannerGallery.framework/WDeComIBANScannerGallery.bundle'

        ss.dependency            'paymentSDK/IBANScanner'
        ss.dependency            'paymentSDK/PhotoGallery'
    end

    s.subspec 'ZAPP' do |ss|
        ss.vendored_frameworks = 'eCom/WDeComZAPP.framework'

        ss.dependency            'paymentSDK/Core'
        ss.dependency            'ZappMerchantLib', '~> 1.1.2'
    end
end
