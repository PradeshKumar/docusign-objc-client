#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol DSUserSignatureDefinition
@end

@interface DSUserSignatureDefinition : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* signatureFont;
/* Specifies the signature ID associated with the signature name. You can use the signature ID in the URI in place of the signature name, and the value stored in the `signatureName` property in the body is used. This allows the use of special characters (such as \"&\", \"<\", \">\") in a the signature name. Note that with each update to signatures, the returned signature ID might change, so the caller will need to trigger off the signature name to get the new signature ID. [optional]
 */
@property(nonatomic) NSString* signatureId;
/*  [optional]
 */
@property(nonatomic) NSString* signatureInitials;
/* Specifies the user signature name. [optional]
 */
@property(nonatomic) NSString* signatureName;

@end
