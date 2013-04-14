#ifndef WLBITEMCOMBINATIONDELETEREQUEST_H
#define WLBITEMCOMBINATIONDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemCombinationDeleteResponse.h>

/**
 * TOP API: 删除商品组合关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemCombinationDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDestItemList() const
;  void setDestItemList (QString destItemList);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual WlbItemCombinationDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 组合商品的id列表
 **/
  QString destItemList;

/**
 * @brief 组合关系的商品id
 **/
  qlonglong itemId;

};

#endif  /* WLBITEMCOMBINATIONDELETEREQUEST_H */
