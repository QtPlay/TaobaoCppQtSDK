#ifndef WLBITEMMAPGETBYEXTENTITYREQUEST_H
#define WLBITEMMAPGETBYEXTENTITYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemMapGetByExtentityResponse.h>

/**
 * TOP API: 根据外部实体类型和实体id查询映射的物流宝商品id
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemMapGetByExtentityRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getExtEntityId() const
;  void setExtEntityId (qlonglong extEntityId);

 QString getExtEntityType() const
;  void setExtEntityType (QString extEntityType);


  virtual WlbItemMapGetByExtentityResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 外部实体类型对应的商品id
 **/
  qlonglong extEntityId;

/**
 * @brief 外部实体类型： IC_ITEM--ic商品 IC_SKU--ic销售单元
 **/
  QString extEntityType;

};

#endif  /* WLBITEMMAPGETBYEXTENTITYREQUEST_H */
