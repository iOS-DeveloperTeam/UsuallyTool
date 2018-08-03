Pod::Spec.new do |s|
s.name         = "NNUsuallyTool"
s.version      = "0.0.2"
s.ios.deployment_target = '9.0'
s.summary      = "简介"
s.homepage     = "https://github.com/iOS-DeveloperTeam/UsuallyTool"
s.social_media_url = 'https://www.baidu.com'
s.license      = "MIT"
s.author       = { "liupengkun" => "2562732740@qq.com" }
s.source       = { :git => 'https://github.com/iOS-DeveloperTeam/UsuallyTool.git', :tag =>    s.version}
s.requires_arc = true
s.source_files = 'UsuallyTool/*'
#依赖库，不能依赖未发布的库
#s.dependency = 'AFNetworking' , 'SDWebImage'
end