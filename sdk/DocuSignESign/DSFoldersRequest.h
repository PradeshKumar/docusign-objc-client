#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSFoldersRequest
@end

@interface DSFoldersRequest : DSObject

/*  [optional]
 */
@property(nonatomic) NSArray* /* NSString */ envelopeIds;
/* The folder ID the envelope is being moved from. [optional]
 */
@property(nonatomic) NSString* fromFolderId;

@end