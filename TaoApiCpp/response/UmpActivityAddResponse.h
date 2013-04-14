#ifndef UMPACTIVITYADDRESPONSE_H
#define UMPACTIVITYADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 新增优惠活动。设置优惠活动的基本信息，比如活动时间，活动针对的对象（可以是满足某些条件的买家）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityAddResponse : public TaoResponse
{
public:
 virtual ~UmpActivityAddResponse() { }

  qlonglong getActId() const;
  void setActId (qlonglong actId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

};

#endif
