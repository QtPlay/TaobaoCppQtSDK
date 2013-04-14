#ifndef SUBUSERDUTYDELETEREQUEST_H
#define SUBUSERDUTYDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDutyDeleteResponse.h>

/**
 * TOP API: 通过主账号ID和职务ID来删除主账号下的该职务信息。使用此职务的员工中职务一栏将变为空（通过主账号登陆只能删除属于该主账号下的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutyDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDutyId() const
;  void setDutyId (qlonglong dutyId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDutyDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 职务ID
 **/
  qlonglong dutyId;

/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERDUTYDELETEREQUEST_H */
