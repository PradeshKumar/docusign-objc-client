#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "DSFilter.h"
#import "DSFolder.h"
#import "DSErrorDetails.h"


@protocol DSFolder
@end

@interface DSFolder : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* ownerUserName;
/*  [optional]
 */
@property(nonatomic) NSString* ownerEmail;
/*  [optional]
 */
@property(nonatomic) NSString* ownerUserId;
/*  [optional]
 */
@property(nonatomic) NSString* type;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* uri;
/*  [optional]
 */
@property(nonatomic) NSString* parentFolderId;
/*  [optional]
 */
@property(nonatomic) NSString* parentFolderUri;
/*  [optional]
 */
@property(nonatomic) NSString* folderId;

@property(nonatomic) DSErrorDetails* errorDetails;
/* A collection of folder objects returned in a response. [optional]
 */
@property(nonatomic) NSArray<DSFolder>* folders;

@property(nonatomic) DSFilter* filter;

@end