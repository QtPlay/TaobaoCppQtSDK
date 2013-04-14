#ifndef WLBITEMCOMBINATIONCREATEREQUEST_H
#define WLBITEMCOMBINATIONCREATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemCombinationCreateResponse.h>

/**
 * TOP API: 创建商品组合关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemCombinationCreateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDestItemList() const
;  void setDestItemList (QString destItemList);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getProportionList() const
;  void setProportionList (QString proportionList);


  virtual WlbItemCombinationCreateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 组合商品的id列表
 **/
  QString destItemList;

/**
 * @brief 要建立组合关系的商品id
 **/
  qlonglong itemId;

/**
 * @brief 组成组合商品的比例列表，描述组合商品的组合比例，默认为1,1,1
 **/
  QString proportionList;

};

#endif  /* WLBITEMCOMBINATIONCREATEREQUEST_H */
