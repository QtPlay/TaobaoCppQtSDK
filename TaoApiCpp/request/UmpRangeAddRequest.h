#ifndef UMPRANGEADDREQUEST_H
#define UMPRANGEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpRangeAddResponse.h>

/**
 * TOP API: 指定某项活动中，某个商家的某些类型物品（指定商品，指定类目或者别的）参加或者不参加活动。当活动详情的参与类型为部分或者部分不参加的时候，需要指定具体哪部分参加或者不参加，使用本接口完成操作。比如部分商品满就送，这里的range用来指定具体哪些商品参加满就送活动。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpRangeAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);

 QString getIds() const
;  void setIds (QString ids);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual UmpRangeAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

/**
 * @brief id列表，当范围类型为商品时，该id为商品id；当范围类型为类目时，该id为类目id.多个id用逗号隔开，一次不超过50个
 **/
  QString ids;

/**
 * @brief 范围的类型，比如是全店，商品，类目 
见：MarketingConstants.PARTICIPATE_TYPE_*
 **/
  qlonglong type;

};

#endif  /* UMPRANGEADDREQUEST_H */
