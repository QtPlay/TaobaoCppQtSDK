#ifndef SIMBAINSIGHTCATSBASEGETREQUEST_H
#define SIMBAINSIGHTCATSBASEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightCatsbaseGetResponse.h>

/**
 * TOP API: 类目基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsbaseGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCategoryIds() const
;  void setCategoryIds (QString categoryIds);

 QString getFilter() const
;  void setFilter (QString filter);

 QString getNick() const
;  void setNick (QString nick);

 QString getTime() const
;  void setTime (QString time);


  virtual SimbaInsightCatsbaseGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询类目id数组，最大长度200
 **/
  QString categoryIds;

/**
 * @brief 结果过滤。PV：返回展现量；CLICK：返回点击量；AVGCPC：返回平均出价；COMPETITION ：返回竞争宝贝数;CTR 点击率。filter可由,组合
 **/
  QString filter;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 时间格式(DAY: 最近一天； WEEK：最近一周。MONTH：最近一个月。3MONTH：最近三个月)
 **/
  QString time;

};

#endif  /* SIMBAINSIGHTCATSBASEGETREQUEST_H */
