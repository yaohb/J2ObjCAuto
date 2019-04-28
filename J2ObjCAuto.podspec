Pod::Spec.new do |s|
  s.name             = 'J2ObjCAuto'
  s.version          = '2.4'
  s.summary          = 'A podspec used to auto integration of J2ObjC files'

  s.description      = <<-DESC
A podspec used to auto integration of J2ObjC files, just pod J2ObjCAuto, and then install, that's all
                       DESC

  s.homepage         = 'https://github.com/yaohb/J2ObjCAuto'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yao_seu' => 'yao_seu@126.com' }
  s.source           = { :git => 'https://github.com/yaohb/J2ObjCAuto.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.source_files = s.version.to_s+'/include/**/*.{h}'
  s.header_mappings_dir = s.version.to_s+'/include'
  s.public_header_files = s.version.to_s+'/include/**/*.h'
  s.libraries = 'iconv'
  # s.frameworks = 'UIKit', 'MapKit'
end
