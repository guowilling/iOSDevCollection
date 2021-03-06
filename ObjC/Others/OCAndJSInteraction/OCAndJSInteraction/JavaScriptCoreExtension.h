//
//  JavaScriptCoreExtension.h
//  OCAndJSInteraction
//
//  Created by Willing Guo on 16/12/1.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

@protocol JavaScriptCoreExtensionProtocol <JSExport>

- (NSString *)getAppVersion;

// Note that the JSExport macro may only be applied to a selector that takes one
// or more argument.
JSExportAs(getSum, - (NSInteger)getSumWithNumber1:(id)num1 number2:(id)num2 number3:(id)num3);

@end

@interface JavaScriptCoreExtension : NSObject <JavaScriptCoreExtensionProtocol>

@end
