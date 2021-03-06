#include "convolve.h"


/*!
 * Функция для свёртки сигнала с ИХ.
 * \param[in]  xh - входной сигнал, дополненный T - 1 нулями.
 * \param[out] y - выходной сигнал.
 * \param[in]  N - длина исходного входной сигнала.
 * \param[in]  h - ИХ.
 * \param[in]  T - длина ИХ.
 * \return 0 - успех, -1 - нереализована.
 */
int DSP_convolve(const float* xh, float* y, size_t N, const float* h, size_t T)
{
    return -1;
}

/*!
 * Функция для свёртки с ИХ и децимацией сигнала.
 * \param[in] xh - входной сигнал, дополненный T - 1 нулями.
 * \param[out] y - выходной сигнал.
 * \param[in] N - длина исходного входной сигнала.
 * \param[in] h - ИХ.
 * \param[in] T - длина ИХ.
 * \param[in] D - коэффициент децимации.
 * \return 0 - успех, -1 - нереализована.
 */
int DSP_convolve_decimate(const float* xh, float* y, size_t N, 
                          const float* h, size_t T, size_t D)
{
    return -1;
}

/*!
 * Функция для свёртки с ИХ целочисленных комплексных сигналов.
 * \param[in] xh - входной сигнал, дополненный T - 1 нулями.
 * \param[out] y - выходной сигнал.
 * \param[in] N - длина исходного входной сигнала.
 * \param[in] h - ИХ.
 * \param[in] T - длина ИХ.
 * \return 0 - успех, -1 - нереализована.
 */
int DSP_convolve_complex_int(const int16_t* xh, int16_t* y, size_t N, 
                             const int16_t* h,  size_t T)
{
    return -1;
}

/*!
 * Функция для свёртки с ИХ целочисленных 2-мерных сигналов.
 * \param[in] x - 2-мерный входной сигнал.
 * \param[out] y - 2-мерный выходной сигнал.
 * \param[in] Nh - высота входного сигнала.
 * \param[in] Nw - ширина входного сигнала.
 * \param[in] h - ИХ.
 * \param[in] Th - высота ИХ.
 * \param[in] Th - ширина ИХ.
 * \return 0 - успех, -1 - нереализована.
 */
int DSP_convolve_2D(const uint8_t** x, uint8_t** y, size_t Nh, size_t Nw, 
                    const int8_t**  h, size_t Th,  size_t Tw)
{
    return -1;
}
