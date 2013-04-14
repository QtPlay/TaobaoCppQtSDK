#ifndef WANGWANGESERVICEGROUPMEMBERGETRESPONSE_H
#define WANGWANGESERVICEGROUPMEMBERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/GroupMember.h>


/**
 * @brief TOP RESPONSE API: 用某个组管理员账号查询，返回该组组名、和该组所有组成员ID（E客服的分流设置）。 
 
用旺旺主帐号查询，返回所有组的组名和该组所有组成员ID。 
 
返回的组成员ID可以是多个，用 "," 隔开。 
 
被查者ID只能传入一个。 
 
组成员中排名最靠前的ID是组管理员ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceGroupmemberGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceGroupmemberGetResponse() { }

  QList<GroupMember> getGroupMemberList() const;
  void setGroupMemberList (QList<GroupMember> groupMemberList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 组及其成员列表
 **/
  QList<GroupMember> groupMemberList;

};

#endif
