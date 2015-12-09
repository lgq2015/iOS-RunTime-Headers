/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNDataMapperContactStore : CNContactStore {
    <CNDataMapper> * _mapper;
}

@property (nonatomic, readonly, retain) NSObject<CNDataMapper> *mapper;

+ (Class)dataMapperClass;

- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultContainerIdentifier;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (id)groupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)iOSMapper;
- (id)init;
- (id)initWithDataMapper:(id)arg1;
- (BOOL)isValidSaveRequest:(id)arg1 error:(id*)arg2;
- (id)mapper;
- (id)meContactIdentifierWithError:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(int)arg1 completionHandler:(id /* block */)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (BOOL)setMeContact:(id)arg1 error:(id*)arg2;
- (BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end