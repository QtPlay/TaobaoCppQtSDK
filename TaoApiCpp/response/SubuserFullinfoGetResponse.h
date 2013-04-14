#ifndef SUBUSERFULLINFOGETRESPONSE_H
#define SUBUSERFULLINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SubUserFullInfo.h>


/**
 * @brief TOP RESPONSE API: 获取指定账户子账号的详细信息，其中包括子账号的账号信息以及员工、部门、职务信息（只能通过主账号登陆并查询属于该主账号下的某个子账号详细信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserFullinfoGetResponse : public TaoResponse
{
public:
 virtual ~SubuserFullinfoGetResponse() { }

  SubUserFullInfo getSubFullinfo() const;
  void setSubFullinfo (SubUserFullInfo subFullinfo);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 子账号详细信息，其中包括账号基本信息、员工信息和部门职务信息
 **/
  SubUserFullInfo subFullinfo;

};

#endif
