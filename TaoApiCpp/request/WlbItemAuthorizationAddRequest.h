#ifndef WLBITEMAUTHORIZATIONADDREQUEST_H
#define WLBITEMAUTHORIZATIONADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemAuthorizationAddResponse.h>

/**
 * TOP API: 添加商品的授权规则：添加规则之后代销商可以增加商品代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAuthorizationAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAuthType() const
;  void setAuthType (qlonglong authType);

 QDateTime getAuthorizeEndTime() const
;  void setAuthorizeEndTime (QDateTime authorizeEndTime);

 QDateTime getAuthorizeStartTime() const
;  void setAuthorizeStartTime (QDateTime authorizeStartTime);

 QString getConsignUserNick() const
;  void setConsignUserNick (QString consignUserNick);

 QString getItemIdList() const
;  void setItemIdList (QString itemIdList);

 QString getName() const
;  void setName (QString name);

 qlonglong getQuantity() const
;  void setQuantity (qlonglong quantity);

 QString getRuleCode() const
;  void setRuleCode (QString ruleCode);


  virtual WlbItemAuthorizationAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 授权类型：1=全量授权，0=部分授权 
当部分授权时，需要指定授权数量quantity
 **/
  qlonglong authType;

/**
 * @brief 授权结束时间
 **/
  QDateTime authorizeEndTime;

/**
 * @brief 授权开始时间
 **/
  QDateTime authorizeStartTime;

/**
 * @brief 被授权人用户id
 **/
  QString consignUserNick;

/**
 * @brief 商品id列表，以英文逗号,分隔，最多可放入50个商品ID。
 **/
  QString itemIdList;

/**
 * @brief 规则名称
 **/
  QString name;

/**
 * @brief 授权数量
 **/
  qlonglong quantity;

/**
 * @brief 授权规则：目前只有GRANT_FIX，按照数量授权
 **/
  QString ruleCode;

};

#endif  /* WLBITEMAUTHORIZATIONADDREQUEST_H */
