#ifndef ITEMCATSINCREMENTGETREQUEST_H
#define ITEMCATSINCREMENTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemcatsIncrementGetResponse.h>

/**
 * TOP API: 增量获取后台类目、类目属性、类目属性值数据 
<br/>1. 每天7点左右会产生今天的增量数据，在7点之前获取增量类目数据将会报错，在7点之后获取增量类目数据可以实时返回。 
<br/>2. 最长可以获取最近7天的增量类目数据，如果超过7天没有同步类目数据，建议走<a href="http://api.taobao.com/apidoc/api.htm?path=cid:3-apiId:11078">全量类目</a>接口获取。 
<br/>3. 在增量接口的基础上，建议5天做一次全量同步最新数据，防止数据丢失
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemcatsIncrementGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCids() const
;  void setCids (qlonglong cids);

 qlonglong getDays() const
;  void setDays (qlonglong days);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual ItemcatsIncrementGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 一级类目ID列表，用半角逗号(,)分隔，例如:"16,19562"，一次最多可以获取10个类目的增量数据。
 **/
  qlonglong cids;

/**
 * @brief 要获取最近哪一天的增量类目数据，可选值为：1~7。默认值为1，表示获取昨天发生变更的类目数据。
 **/
  qlonglong days;

/**
 * @brief 获取类目的类型：1代表集市、2代表天猫
 **/
  qlonglong type;

};

#endif  /* ITEMCATSINCREMENTGETREQUEST_H */
