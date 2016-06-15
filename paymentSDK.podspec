Pod::Spec.new do |s|
  s.name             = 'paymentSDK'
  s.version          = '2.1.5'
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
  s.documentation_url= 'https://paymentsdk.github.io'
  s.license          = { :type => 'MIT' }
  s.authors          = { 'Radoslav Danko' => 'radoslav.danko@wirecard.com', 'Stefan Sedlak' => 'stefan.sedlak@wirecard.com' }
  s.source           = { :git => 'https://github.com/wirecard/paymentSDK-iOS.git', :tag => s.version }
  s.platform         = :ios
  s.ios.deployment_target = '7.1'

  s.dependency       'AFNetworking', '~> 3.1.0'
  s.dependency       'CardIO', '~> 5.3.2'
  s.dependency       'CMPopTipView', '~> 2.3.0'
  s.dependency       'CocoaLumberjack', '~> 2.2.0'
  s.ios.dependency   'Lockbox', '~> 2.1.0'
  s.dependency       'Mantle', '~> 2.0.7'
  s.ios.dependency   'MBProgressHUD', '~> 0.9.2'
  s.dependency       'TPKeyboardAvoiding', '~> 1.3'
  s.dependency       'libextobjc/EXTScope', '~> 0.4.1'

  s.requires_arc     = true
  s.frameworks       = 'Foundation', 'UIKit', 'PassKit'
  s.libraries        = 'xml2'
  s.vendored_frameworks = 'PaymentSDK.framework'
  s.resource            = 'PaymentSDKResources.bundle'
end
