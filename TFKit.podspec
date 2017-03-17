Pod::Spec.new do |s|

  s.name         = "TFKit"
  s.version      = "0.0.4"
  s.summary      = "Dabay tech : TFKit is useful UI tools."
  s.homepage     = "https://github.com/Donkey-Tao/TFKit"
  s.license      = "MIT"
  s.author       = { "Tao Fei" => "taofei0610@gmail.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/Donkey-Tao/TFKit.git", :tag => s.version.to_s}
  s.source_files = "TFKit/**/*.{h,m}"
  s.frameworks   = "UIKit",'Accelerate',"Security"
  s.requires_arc = true

end
