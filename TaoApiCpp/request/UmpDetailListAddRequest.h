#ifndef UMPDETAILLISTADDREQUEST_H
#define UMPDETAILLISTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpDetailListAddResponse.h>

/**
 * TOP API: 批量添加营销活动。替代单条添加营销详情的的API。此接口适用针对某个营销活动的多档设置，会按顺序插入detail。若在整个事务过程中出现断点，会将已插入完成的detail_id返回，注意记录这些id，并将其删除，会对交易过程中的优惠产生影响。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailListAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);

 QString getDetails() const
;  void setDetails (QString details);


  virtual UmpDetailListAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 营销活动id。
 **/
  qlonglong actId;

/**
 * @brief 营销详情的列表。此列表由detail的json字符串组成。最多插入为10个。
 **/
  QString details;

};

#endif  /* UMPDETAILLISTADDREQUEST_H */
