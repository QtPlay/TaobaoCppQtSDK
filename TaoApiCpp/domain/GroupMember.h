#ifndef GROUPMEMBER_H
#define GROUPMEMBER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 组及其成员列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class GroupMember : public TaoDomain
{

public:
 virtual ~GroupMember() { }

  qlonglong getGroupId() const;
  void setGroupId (qlonglong groupId);
  QString getGroupName() const;
  void setGroupName (QString groupName);
  QString getMemberList() const;
  void setMemberList (QString memberList);
  
  virtual void parseResponse();

private:
/**
 * @brief 组编号
 **/
  qlonglong groupId;

/**
 * @brief 组名称
 **/
  QString groupName;

/**
 * @brief 组成员列表，逗号分隔
 **/
  QString memberList;

};

#endif  /* GROUPMEMBER_H */
