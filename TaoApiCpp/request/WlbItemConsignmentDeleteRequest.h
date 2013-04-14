#ifndef WLBITEMCONSIGNMENTDELETEREQUEST_H
#define WLBITEMCONSIGNMENTDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemConsignmentDeleteResponse.h>

/**
 * TOP API: 删除商品的代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemConsignmentDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getIcItemId() const
;  void setIcItemId (qlonglong icItemId);

 qlonglong getOwnerItemId() const
;  void setOwnerItemId (qlonglong ownerItemId);

 qlonglong getRuleId() const
;  void setRuleId (qlonglong ruleId);


  virtual WlbItemConsignmentDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 代销商前台宝贝ID
 **/
  qlonglong icItemId;

/**
 * @brief 货主的物流宝商品ID
 **/
  qlonglong ownerItemId;

/**
 * @brief 授权关系id
 **/
  qlonglong ruleId;

};

#endif  /* WLBITEMCONSIGNMENTDELETEREQUEST_H */
