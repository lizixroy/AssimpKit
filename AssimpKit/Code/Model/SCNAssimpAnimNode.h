//
//  SCNAssimpAnimNode.h
//  AssimpKit
//
//  Created by Deepak Surti on 10/29/16.
//
//

#import <SceneKit/SceneKit.h>

@interface SCNAssimpAnimNode : SCNNode

@property(readwrite, nonatomic) NSValue* boneOffsetMat;
@property(readwrite, nonatomic) NSInteger nPosKeys;
@property(readwrite, nonatomic) NSInteger nRotKeys;
@property(readwrite, nonatomic) NSInteger nScaleKeys;

@end