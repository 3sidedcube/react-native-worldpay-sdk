//
//  PKPaymentToken+Serialisation.h
//  RNWorldPay
//
//  Created by Simon Mitchell on 16/05/2017.
//  Copyright © 2017 Facebook. All rights reserved.
//

@import PassKit;

@interface PKPaymentToken (Serialisation)

- (NSDictionary *)dictionaryRepresentation;

@end
