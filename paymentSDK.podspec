Pod::Spec.new do |s|
  s.name             = 'paymentSDK'
  s.version          = '2.0-beta-2-simulator'
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
  s.homepage         = 'https://github.com/mposSVK/paymentSDK-iOS'
  s.documentation_url= 'http://paymentsdk.github.io'
  s.license          = { :type => 'MIT' }
  s.authors          = { 'Radoslav Danko' => 'radoslav.danko@wirecard.com', 'Stefan Sedlak' => 'stefan.sedlak@wirecard.com' }
  s.source           = { :git => 'https://github.com/mposSVK/paymentSDK-iOS.git', :tag => s.version }
  s.platform         = :ios
  s.ios.deployment_target = '7.1'

  s.dependency       'AFNetworking', '~> 3.0'
  s.dependency       'CardIO', '~> 5.3'
  s.dependency       'CMPopTipView', '~> 2.2'
  s.dependency       'CocoaLumberjack', '~> 2.2'
  s.ios.dependency   'Lockbox', '~> 2.1'
  s.dependency       'Mantle', '~> 2.0'
  s.ios.dependency   'MBProgressHUD', '~> 0.9'
  s.dependency       'TPKeyboardAvoiding', '~> 1.2'
  s.dependency       'libextobjc/EXTScope', '~> 0.4'

  s.requires_arc     = true
  s.frameworks       = 'Foundation', 'UIKit', 'PassKit'
  s.libraries        = 'xml2'
  s.vendored_frameworks = 'PaymentSDK.framework'
  s.resource            = 'PaymentSDKResources.bundle'
end
