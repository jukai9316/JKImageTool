# JKImageTool
iOS图片存储工具

//使用类方法即可
//将图片保存到本地
+ (void)SaveImageToLocal:(UIImage*)image Keys:(NSString*)key;

//本地是否有相关图片
+ (BOOL)LocalHaveImage:(NSString*)key;

//从本地获取图片
+ (UIImage*)GetImageFromLocal:(NSString*)key;

//将图片从本地删除
+ (void)RemoveImageToLocalKeys:(NSString*)key;
