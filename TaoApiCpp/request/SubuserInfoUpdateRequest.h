#ifndef SUBUSERINFOUPDATEREQUEST_H
#define SUBUSERINFOUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserInfoUpdateResponse.h>

/**
 * TOP API: 修改指定账户子账号的基本信息（通过主账号登陆只能修改属于该主账号的子账号基本信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserInfoUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getIsDisableSubaccount() const
;  void setIsDisableSubaccount (bool isDisableSubaccount);

 bool getIsDispatch() const
;  void setIsDispatch (bool isDispatch);

 qlonglong getSubId() const
;  void setSubId (qlonglong subId);


  virtual SubuserInfoUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否停用子账号 true:表示停用该子账号false:表示开启该子账号
 **/
  bool isDisableSubaccount;

/**
 * @brief 子账号是否参与分流 true:参与分流 false:不参与分流
 **/
  bool isDispatch;

/**
 * @brief 子账号ID
 **/
  qlonglong subId;

};

#endif  /* SUBUSERINFOUPDATEREQUEST_H */
