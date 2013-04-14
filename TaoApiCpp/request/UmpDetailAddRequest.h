#ifndef UMPDETAILADDREQUEST_H
#define UMPDETAILADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpDetailAddResponse.h>

/**
 * TOP API: 增加活动详情。活动详情里面包括活动的范围（店铺，商品），活动的参数（比如具体的折扣），参与类型（全部，部分，部分不参加）等信息。当参与类型为部分或部分不参加的时候需要和taobao.ump.range.add来配合使用。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);

 QString getContent() const
;  void setContent (QString content);


  virtual UmpDetailAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 增加工具详情
 **/
  qlonglong actId;

/**
 * @brief 活动详情内容，json格式，可以通过ump sdk中的MarketingTool来进行处理
 **/
  QString content;

};

#endif  /* UMPDETAILADDREQUEST_H */
