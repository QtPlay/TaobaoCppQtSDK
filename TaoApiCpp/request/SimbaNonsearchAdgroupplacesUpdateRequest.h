#ifndef SIMBANONSEARCHADGROUPPLACESUPDATEREQUEST_H
#define SIMBANONSEARCHADGROUPPLACESUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesUpdateResponse.h>

/**
 * TOP API: 批量修改推广组定向推广投放位置价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAdgroupPlacesJson() const
;  void setAdgroupPlacesJson (QString adgroupPlacesJson);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaNonsearchAdgroupplacesUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组id，投放位置id，出价，是否默认出价 json数组字符串，数组个数最多200个。是否默认出价不能为空, 出价以“分”为单位，不能小于5分，不能大于最高日限额，不能大于9999分。 
json数组中的key必须和对应实体AdGroupPlace中的属性字段保持一致，否则对应的实体对象属性获取不到相应的值
 **/
  QString adgroupPlacesJson;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBANONSEARCHADGROUPPLACESUPDATEREQUEST_H */
