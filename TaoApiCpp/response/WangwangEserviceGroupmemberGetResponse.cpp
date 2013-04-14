#include <TaoApiCpp/response/WangwangEserviceGroupmemberGetResponse.h>

QList<GroupMember> WangwangEserviceGroupmemberGetResponse::getGroupMemberList() const {
  return groupMemberList;
}
void WangwangEserviceGroupmemberGetResponse::setGroupMemberList (QList<GroupMember> groupMemberList) {
  this->groupMemberList = groupMemberList;
}

void WangwangEserviceGroupmemberGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("group_member_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("group_member_list");
  Parser *parser;
  foreach (parser, listParser) {
    GroupMember tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    groupMemberList.append(tmp);
  }
  }

}

