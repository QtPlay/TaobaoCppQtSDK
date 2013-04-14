#ifndef CAIPIAOGOODSINFOINPUTREQUEST_H
#define CAIPIAOGOODSINFOINPUTREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoGoodsInfoInputResponse.h>

/**
 * TOP API: 录入参加送彩票商品信息，如果录入成功，返回true，如果录入失败，返回false，后端会根据商品id与赠送类型（goodsid_presenttype_uk）来决定是新增数据还是修改数据。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoGoodsInfoInputRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getActEndDate() const
;  void setActEndDate (QString actEndDate);

 QString getActStartDate() const
;  void setActStartDate (QString actStartDate);

 QString getGoodsDesc() const
;  void setGoodsDesc (QString goodsDesc);

 qlonglong getGoodsId() const
;  void setGoodsId (qlonglong goodsId);

 QString getGoodsImage() const
;  void setGoodsImage (QString goodsImage);

 QString getGoodsPrice() const
;  void setGoodsPrice (QString goodsPrice);

 QString getGoodsTitle() const
;  void setGoodsTitle (QString goodsTitle);

 qlonglong getGoodsType() const
;  void setGoodsType (qlonglong goodsType);

 qlonglong getLotteryTypeId() const
;  void setLotteryTypeId (qlonglong lotteryTypeId);

 qlonglong getPresentType() const
;  void setPresentType (qlonglong presentType);


  virtual CaipiaoGoodsInfoInputResponse *getResponseClass(const QString &session = "",
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
 * @brief 店铺相关商品参加的送彩票活动描述
 **/
  QString goodsDesc;

/**
 * @brief 商品在淘宝的唯一id，不可为空
 **/
  qlonglong goodsId;

/**
 * @brief 商品主图地址
 **/
  QString goodsImage;

/**
 * @brief 商品价格,保留两位小数，不可为空
 **/
  QString goodsPrice;

/**
 * @brief 商品标题
 **/
  QString goodsTitle;

/**
 * @brief 商品类目编号，不可为空
 **/
  qlonglong goodsType;

/**
 * @brief 彩种id,不可为空
 **/
  qlonglong lotteryTypeId;

/**
 * @brief 赠送类型：0-满就送；1-好评送；2-分享送；3-游戏送；4-收藏送，不可为空
 **/
  qlonglong presentType;

};

#endif  /* CAIPIAOGOODSINFOINPUTREQUEST_H */
