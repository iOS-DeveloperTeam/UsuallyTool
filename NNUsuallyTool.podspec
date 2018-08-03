Pod::Spec.new do |s|
s.name         = "NNUsuallyTool"
s.version      = "0.0.2"
s.summary      = "常用工具类"
s.description  = <<-DESC
	Think: What does it do? Why did you write it? What is the focus
	Think: What does it do? Why did you write it? What is the focus
                   DESC
s.homepage     = "https://github.com/iOS-DeveloperTeam/UsuallyTool.git"
s.social_media_url = 'https://www.baidu.com'
s.license      = "MIT"
s.author       = { "liupengkun" => "2562732740@qq.com" }
s.platform     = :ios
s.platform     = :ios, "8.0"
s.source       = { :git => 'https://github.com/iOS-DeveloperTeam/UsuallyTool.git', :tag =>    s.version}
s.requires_arc = true
s.source_files = 'UsuallyTool/*',"UsuallyTool/*/*"
s.exclude_files = "Classes/Exclude"
end