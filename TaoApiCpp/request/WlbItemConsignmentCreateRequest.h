#ifndef WLBITEMCONSIGNMENTCREATEREQUEST_H
#define WLBITEMCONSIGNMENTCREATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemConsignmentCreateResponse.h>

/**
 * TOP API: 代销商创建商品代销关系：货主创建授权规则，获得授权规则后方可创建商品代销关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemConsignmentCreateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 qlonglong getNumber() const
;  void setNumber (qlonglong number);

 qlonglong getOwnerItemId() const
;  void setOwnerItemId (qlonglong ownerItemId);

 qlonglong getOwnerUserId() const
;  void setOwnerUserId (qlonglong ownerUserId);

 qlonglong getRuleId() const
;  void setRuleId (qlonglong ruleId);


  virtual WlbItemConsignmentCreateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品id
 **/
  qlonglong itemId;

/**
 * @brief 代销数量
 **/
  qlonglong number;

/**
 * @brief 货主商品id
 **/
  qlonglong ownerItemId;

/**
 * @brief 货主id
 **/
  qlonglong ownerUserId;

/**
 * @brief 通过taobao.wlb.item.authorization.add接口创建后得到的rule_id，规则中设定了代销商可以代销的商品数量
 **/
  qlonglong ruleId;

};

#endif  /* WLBITEMCONSIGNMENTCREATEREQUEST_H */
