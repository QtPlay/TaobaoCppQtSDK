#ifndef UMPDETAILGETRESPONSE_H
#define UMPDETAILGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 查询活动详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailGetResponse : public TaoResponse
{
public:
 virtual ~UmpDetailGetResponse() { }

  QString getContent() const;
  void setContent (QString content);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 活动详情信息，可以通过ump sdk中的MarketingTool来进行处理
 **/
  QString content;

};

#endif
