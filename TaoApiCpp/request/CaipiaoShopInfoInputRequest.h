#ifndef CAIPIAOSHOPINFOINPUTREQUEST_H
#define CAIPIAOSHOPINFOINPUTREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoShopInfoInputResponse.h>

/**
 * TOP API: 录入参加送彩票店铺信息，如果录入成功，返回true，如果录入失败，返回false，后端会根据卖家id与赠送类型（sellerid_presenttype_uk）来决定是新增数据还是修改数据。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoShopInfoInputRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getActEndDate() const
;  void setActEndDate (QString actEndDate);

 QString getActStartDate() const
;  void setActStartDate (QString actStartDate);

 qlonglong getPresentType() const
;  void setPresentType (qlonglong presentType);

 QString getShopDesc() const
;  void setShopDesc (QString shopDesc);

 QString getShopName() const
;  void setShopName (QString shopName);

 qlonglong getShopType() const
;  void setShopType (qlonglong shopType);


  virtual CaipiaoShopInfoInputResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动结束时间，格式需严格遵守yyyy-MM-dd HH:mm:ss，不可为空
 **/
  QString actEndDate;

/**
 * @brief 活动开始时间，格式需严格遵守yyyy-MM-dd HH:mm:ss，不可为空
 **/
  QString actStartDate;

/**
 * @brief 赠送类型：0-满就送；1-好评送；2-分享送；3-游戏送；4-收藏送，不可为空
 **/
  qlonglong presentType;

/**
 * @brief 店铺参加的送彩票活动描述
 **/
  QString shopDesc;

/**
 * @brief 店铺名称
 **/
  QString shopName;

/**
 * @brief 店铺类目编号，不可为空
 **/
  qlonglong shopType;

};

#endif  /* CAIPIAOSHOPINFOINPUTREQUEST_H */
