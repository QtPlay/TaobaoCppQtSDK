#ifndef SIMBAADGROUPNONSEARCHPRICESUPDATEREQUEST_H
#define SIMBAADGROUPNONSEARCHPRICESUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupNonsearchpricesUpdateResponse.h>

/**
 * TOP API: 修改通投出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupNonsearchpricesUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAdgroupidPriceJson() const
;  void setAdgroupidPriceJson (QString adgroupidPriceJson);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAdgroupNonsearchpricesUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组id，通投位置价格，是否使用默认出价json 数组字符串，数组个数最多200个. 
json数组中的key必须和对应实体ADGroup中的属性字段保持一致，否则对应的实体对象属性获取不到相应的值， 
adgroupId,isNonsearchDefaultPrice不能为空。nonsearchMaxPrice是整数，以“分”为单位，不能小于5，不能大于日限额,不能大于9999分。 启用非搜索默认出价时nonsearchMaxPrice为0
 **/
  QString adgroupidPriceJson;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAADGROUPNONSEARCHPRICESUPDATEREQUEST_H */
