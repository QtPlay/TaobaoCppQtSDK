#ifndef TRAVELITEMSAREAGETREQUEST_H
#define TRAVELITEMSAREAGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TravelItemsareaGetResponse.h>

/**
 * TOP API: 此接口用于获取卖家发布旅游度假线路商品时目的地地区级联信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TravelItemsareaGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);


  virtual TravelItemsareaGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品所属叶子类目ID，支持旅游度假线路8个类目。
 **/
  qlonglong cid;

};

#endif  /* TRAVELITEMSAREAGETREQUEST_H */
