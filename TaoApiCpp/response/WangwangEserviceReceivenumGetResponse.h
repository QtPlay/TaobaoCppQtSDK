#ifndef WANGWANGESERVICERECEIVENUMGETRESPONSE_H
#define WANGWANGESERVICERECEIVENUMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ReplyStatOnDay.h>


/**
 * @brief TOP RESPONSE API: 根据操作者ID，返回被查者ID指定时间段内每个帐号的"已接待人数"<br/> 
备注：<br/> 
1、如果是操作者ID=被查者ID，返回被查者ID的"已接待人数"。<br/> 
2、如果操作者是组管理员，他可以查询他的组中的所有子帐号的"已接待人数"。<br/> 
3、如果操作者是主账户，他可以查询所有子帐号的"已接待人数"。<br/> 
（注意：这里说的是授权是主帐号，可以查询所有子帐号的数据，具体要查询哪些子账号的数据，需要在service_staff_id具体指定，而不是service_staff_id直接输入主帐号）<br/> 
 4、被查者ID可以是多个，用 "," 隔开，id数不能超过30。<br/> 
 5、规则：某客服在1天内和同一个客户交流了多次，已回复人数算1。<br/> 
6、"已接待人数"定义：买家、卖家彼此发过至少1条消息 ，不论谁先发都可以。<br/> 
  7、被查者ID可以是多个，用 "," 隔开，id数不能超过30。<br/> 
  8、开始时间与结束时间之间的间隔不能超过7天<br/> 
  9、不能查询90天以前的数据<br/> 
  10、不能查询当天的记录<br/> 
   11、查询日期精确到日<br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceReceivenumGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceReceivenumGetResponse() { }

  QList<ReplyStatOnDay> getReplyStatListOnDays() const;
  void setReplyStatListOnDays (QList<ReplyStatOnDay> replyStatListOnDays);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 客服回复列表，按天统计，排列
 **/
  QList<ReplyStatOnDay> replyStatListOnDays;

};

#endif
