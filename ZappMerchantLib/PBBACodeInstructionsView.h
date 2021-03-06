//
//  PBBACodeInstructionsView.h
//  ZappMerchantLib
//
//  Created by Alexandru Maimescu on 21/07/2015.
//  Copyright 2016 IPCO 2012 Limited
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "PBBAAutoLoadableView.h"
#import "PBBACodeInstructions.h"

@interface PBBACodeInstructionsView : PBBAAutoLoadableView

@property (nonatomic, copy) NSAttributedString *instructionStep1;
@property (nonatomic, copy) NSAttributedString *instructionStep2;
@property (nonatomic, copy) NSAttributedString *instructionStep3;
@property (nonatomic, copy) NSAttributedString *instructionStep4A;
@property (nonatomic, copy) NSAttributedString *instructionStep4B;

@property (nonatomic, strong) PBBACodeInstructions *instructions;

@property (nonatomic, copy) NSString *brn;

@end
