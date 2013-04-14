#ifndef TMALLMINISITE_H
#define TMALLMINISITE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫搜索Minisite信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TmallMinisite : public TaoDomain
{

public:
 virtual ~TmallMinisite() { }

  qlonglong getId() const;
  void setId (qlonglong id);
  QString getPromotions() const;
  void setPromotions (QString promotions);
  QString getTitle() const;
  void setTitle (QString title);
  qlonglong getType() const;
  void setType (qlonglong type);
  
  virtual void parseResponse();

private:
/**
 * @brief 店铺id
 **/
  qlonglong id;

/**
 * @brief 店铺优惠信息
 **/
  QString promotions;

/**
 * @brief 店铺名字
 **/
  QString title;

/**
 * @brief 店铺类型
 **/
  qlonglong type;

};

#endif  /* TMALLMINISITE_H */
