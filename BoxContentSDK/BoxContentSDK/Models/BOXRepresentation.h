//
//  BOXRepresentation.h
//  BoxContentSDK
//
//  Created by Helen Kuo on 7/15/16.
//  Copyright © 2016 Box. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BOXContentSDKConstants.h"

@interface BOXRepresentation : NSObject

@property (nonatomic, readwrite, strong) BOXRepresentationType *type;

@property (nonatomic, readwrite, strong) BOXRepresentationStatus *status;

@property (nonatomic, readwrite, strong) NSURL *infoURL;

@property (nonatomic, readwrite, strong) NSURL *contentURL;

@property (nonatomic, readwrite, strong) BOXRepresentationContentType *contentType;

@end
