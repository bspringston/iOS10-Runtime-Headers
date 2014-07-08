/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBSectionIcon, NSString, NSArray, BBSectionParameters, NSDictionary, BBSectionInfo;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding> {
    struct { 
        unsigned int pushDataProvider : 1; 
        unsigned int dataProviderDidLoad : 1; 
        unsigned int bulletinsWithRequestParameters : 1; 
        unsigned int bulletinsFilteredByDEPRECATED : 1; 
        unsigned int bulletinsFilteredByEnabledSectionsDEPRECATED : 1; 
        unsigned int clearedInfoAndBulletinsForClearingAllBulletins : 1; 
        unsigned int clearedInfoForBulletins : 1; 
        unsigned int clearedInfoForBulletinsDEPRECATED : 1; 
        unsigned int attachmentPNGDataForRecordID : 1; 
        unsigned int attachmentAspectRatioForRecordID : 1; 
        unsigned int defaultSectionInfo : 1; 
        unsigned int defaultSubsectionInfos : 1; 
        unsigned int displayNameForSubsectionID : 1; 
        unsigned int sectionParameters : 1; 
        unsigned int migrateSectionInfo : 1; 
        unsigned int sectionDisplayName : 1; 
        unsigned int sectionIcon : 1; 
        unsigned int sectionIconDataDEPRECATED : 1; 
        unsigned int receiveMessageWithName : 1; 
        unsigned int noteSectionInfoDidChange : 1; 
        unsigned int syncBulletinDismissal : 1; 
        unsigned int handleBulletinActionResponse : 1; 
        unsigned int universalSectionIdentifier : 1; 
        unsigned int parentSectionIdentifier : 1; 
    } _traits;
    NSString *_sectionIdentifier;
    NSString *_universalSectionIdentifier;
    BBSectionInfo *_defaultSectionInfo;
    NSString *_sectionDisplayName;
    BBSectionIcon *_sectionIcon;
    NSArray *_sortDescriptors;
    BBSectionParameters *_sectionParameters;
    NSArray *_defaultSubsectionInfos;
    NSDictionary *_subsectionDisplayNames;
    NSString *_sortKey;
    NSString *_parentSectionIdentifier;
    bool_syncsBulletinDismissal;
}

@property(readonly) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; } traits;
@property(copy) NSString * sectionIdentifier;
@property(copy) NSString * universalSectionIdentifier;
@property(copy) BBSectionInfo * defaultSectionInfo;
@property(copy) NSString * sectionDisplayName;
@property(copy) BBSectionIcon * sectionIcon;
@property(copy) NSArray * sortDescriptors;
@property(retain) BBSectionParameters * sectionParameters;
@property(copy) NSArray * defaultSubsectionInfos;
@property(copy) NSString * sortKey;
@property(copy) NSDictionary * subsectionDisplayNames;
@property(readonly) bool syncsBulletinDismissal;
@property(copy) NSString * parentSectionIdentifier;

+ (id)identityForRemoteDataProvider:(id)arg1;
+ (id)identityForDataProvider:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setParentSectionIdentifier:(id)arg1;
- (void)setSubsectionDisplayNames:(id)arg1;
- (id)subsectionDisplayNames;
- (void)setDefaultSubsectionInfos:(id)arg1;
- (void)setSectionParameters:(id)arg1;
- (void)setSectionIcon:(id)arg1;
- (void)setSectionDisplayName:(id)arg1;
- (void)setDefaultSectionInfo:(id)arg1;
- (void)setUniversalSectionIdentifier:(id)arg1;
- (void)setSortKey:(id)arg1;
- (id)initForDataProvider:(id)arg1 forRemoteDataProvider:(bool)arg2;
- (id)parentSectionIdentifier;
- (id)defaultSubsectionInfos;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (bool)syncsBulletinDismissal;
- (id)universalSectionIdentifier;
- (void)setSectionIdentifier:(id)arg1;
- (id)sectionIdentifier;
- (id)sortKey;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; })traits;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end