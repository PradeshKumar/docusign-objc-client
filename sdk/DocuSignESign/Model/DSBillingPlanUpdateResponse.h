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


#import "DSBillingPlanPreview.h"


@protocol DSBillingPlanUpdateResponse
@end

@interface DSBillingPlanUpdateResponse : DSObject

/*  [optional]
 */
@property(nonatomic) NSString* accountPaymentMethod;

@property(nonatomic) DSBillingPlanPreview* billingPlanPreview;
/* Specifies the ISO currency code for the account. [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* The number of seats (users) included. [optional]
 */
@property(nonatomic) NSString* includedSeats;
/*  [optional]
 */
@property(nonatomic) NSString* paymentCycle;
/*  [optional]
 */
@property(nonatomic) NSString* paymentMethod;
/*  [optional]
 */
@property(nonatomic) NSString* planId;
/*  [optional]
 */
@property(nonatomic) NSString* planName;

@end
