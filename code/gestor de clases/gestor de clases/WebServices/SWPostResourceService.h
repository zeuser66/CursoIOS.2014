//
//  SWPostResourceService.h
//  gestor de clases
//
//  Created by Pablo Formoso Estada on 06/03/14.
//  Copyright (c) 2014 Pablo Formoso Estada. All rights reserved.
//
@class SWResource;
#import <Foundation/Foundation.h>

@interface SWPostResourceService : NSObject

- (void)postResource:(SWResource *)res forController:(id)aController;

@end
