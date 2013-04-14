#ifndef WLBITEMCONSIGNMENTPAGEGETREQUEST_H
#define WLBITEMCONSIGNMENTPAGEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemConsignmentPageGetResponse.h>

/**
 * TOP API: 代销商角度分页查询物流宝商品的代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemConsignmentPageGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getIcItemId() const
;  void setIcItemId (qlonglong icItemId);

 qlonglong getOwnerItemId() const
;  void setOwnerItemId (qlonglong ownerItemId);

 QString getOwnerUserNick() const
;  void setOwnerUserNick (QString ownerUserNick);


  virtual WlbItemConsignmentPageGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 代销商宝贝id
 **/
  qlonglong icItemId;

/**
 * @brief 供应商商品id
 **/
  qlonglong ownerItemId;

/**
 * @brief 供应商用户昵称
 **/
  QString ownerUserNick;

};

#endif  /* WLBITEMCONSIGNMENTPAGEGETREQUEST_H */
