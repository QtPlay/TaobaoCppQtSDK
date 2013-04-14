#ifndef SIMBAADGROUPADDREQUEST_H
#define SIMBAADGROUPADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupAddResponse.h>

/**
 * TOP API: 创建一个推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 qlonglong getDefaultPrice() const
;  void setDefaultPrice (qlonglong defaultPrice);

 QString getImgUrl() const
;  void setImgUrl (QString imgUrl);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getNick() const
;  void setNick (QString nick);

 QString getTitle() const
;  void setTitle (QString title);


  virtual SimbaAdgroupAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 推广组默认出价，单位为分，不能小于5 不能大于日最高限额
 **/
  qlonglong defaultPrice;

/**
 * @brief 创意图片地址，必须是商品的图片之一
 **/
  QString imgUrl;

/**
 * @brief 商品Id
 **/
  qlonglong itemId;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 创意标题，最多20个汉字
 **/
  QString title;

};

#endif  /* SIMBAADGROUPADDREQUEST_H */
