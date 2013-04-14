#include <TaoApiCpp/domain/GroupMember.h>
qlonglong GroupMember::getGroupId() const {
  return groupId;
}
void GroupMember::setGroupId (qlonglong groupId) {
  this->groupId = groupId;
}

QString GroupMember::getGroupName() const {
  return groupName;
}
void GroupMember::setGroupName (QString groupName) {
  this->groupName = groupName;
}

QString GroupMember::getMemberList() const {
  return memberList;
}
void GroupMember::setMemberList (QString memberList) {
  this->memberList = memberList;
}


void GroupMember::parseResponse() {
  if (responseParser->hasName("group_id")) {
  groupId = responseParser->getNumByName("group_id");
  }
  if (responseParser->hasName("group_name")) {
  groupName = responseParser->getStrByName("group_name");
  }
  if (responseParser->hasName("member_list")) {
  memberList = responseParser->getStrByName("member_list");
  }

}

