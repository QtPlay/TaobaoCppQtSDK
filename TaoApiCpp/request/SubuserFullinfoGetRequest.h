#ifndef SUBUSERFULLINFOGETREQUEST_H
#define SUBUSERFULLINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserFullinfoGetResponse.h>

/**
 * TOP API: 获取指定账户子账号的详细信息，其中包括子账号的账号信息以及员工、部门、职务信息（只能通过主账号登陆并查询属于该主账号下的某个子账号详细信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserFullinfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getSubId() const
;  void setSubId (qlonglong subId);

 QString getSubNick() const
;  void setSubNick (QString subNick);


  virtual SubuserFullinfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 传入所需要的参数信息（若不需要获取子账号或主账号的企业邮箱地址，则无需传入该参数；若需要获取子账号或主账号的企业邮箱地址，则需要传入fields；可选参数值为subuser_email和user_email，传入其他参数值均无效；两个参数都需要则以逗号隔开传入即可，例如：subuser_email,user_email）
 **/
  QString fields;

/**
 * @brief 子账号ID（传参中sub_id和sub_nick至少需要其中一个，若sub_id与sub_nick同时传入并且合法，那么sub_nick优先，以sub_nick查询子账号）
 **/
  qlonglong subId;

/**
 * @brief 子账号用户名（传参中sub_id和sub_nick至少需要其中一个，若sub_id与sub_nick同时传入并且合法，那么sub_nick优先，以sub_nick查询子账号）
 **/
  QString subNick;

};

#endif  /* SUBUSERFULLINFOGETREQUEST_H */
