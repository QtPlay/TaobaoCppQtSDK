#ifndef UMPRANGEGETRESPONSE_H
#define UMPRANGEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Range.h>


/**
 * @brief TOP RESPONSE API: 查询某个卖家所有参加或者不参加某项活动的物品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpRangeGetResponse : public TaoResponse
{
public:
 virtual ~UmpRangeGetResponse() { }

  QList<Range> getRanges() const;
  void setRanges (QList<Range> ranges);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销范围类列表！
 **/
  QList<Range> ranges;

};

#endif
