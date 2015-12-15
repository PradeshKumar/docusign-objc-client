#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSRecipientSignatureInformation
@end

@interface DSRecipientSignatureInformation : DSObject

/* Specifies the user signature name. [optional]
 */
@property(nonatomic) NSString* signatureName;
/*  [optional]
 */
@property(nonatomic) NSString* signatureInitials;
/*  [optional]
 */
@property(nonatomic) NSString* fontStyle;

@end